//
//  HuesMainController.h
//  Hues
//
//  Created by Zach Waugh on 12/27/10.
//  Copyright 2010 Giant Comet. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class HuesColorsView;

@interface HuesMainController : NSObject <NSWindowDelegate>
{
  IBOutlet HuesColorsView *colorsView;
	IBOutlet NSTextField *hexLabel;
  IBOutlet NSTextField *rgbLabel;
  IBOutlet NSTextField *hslLabel;
  
  NSColorPanel *colorPanel;
}


@property (retain) NSColorPanel *colorPanel;
@property (retain) NSView *colorsView;
@property (retain) NSTextField *hexLabel;
@property (retain) NSTextField *rgbLabel;
@property (retain) NSTextField *hslLabel;

- (void)copyHex:(id)sender;
- (void)copyRGB:(id)sender;
- (void)copyHSL:(id)sender;
- (void)updateColor:(NSNotification *)notification;

@end
