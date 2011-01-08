//
//  HuesPreferencesController.h
//  Hues
//
//  Created by Zach Waugh on 12/27/10.
//  Copyright 2010 Giant Comet. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface HuesPreferencesController : NSWindowController <NSToolbarDelegate>
{
  IBOutlet NSToolbar *toolbar;
  IBOutlet NSView *view;
  IBOutlet NSView *generalView;
  IBOutlet NSView *colorPickersView;
  IBOutlet NSView *advancedView;
  
  NSView *currentView;
  NSString *currentToolbarIdentifier;
}

@property (retain) NSString *currentToolbarIdentifier;
@property (assign) NSView *currentView;
@property (retain) NSToolbar *toolbar;
@property (retain) NSView *view;
@property (retain) NSView *generalView;
@property (retain) NSView *colorPickersView;
@property (retain) NSView *advancedView;

- (void)toolbarItemSelected:(id)sender;

@end
