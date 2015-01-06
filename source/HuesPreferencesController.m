//
//  HuesPreferencesController.m
//  Hues
//
//  Copyright (c) 2014 Zach Waugh
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import "HuesPreferencesController.h"

NSString * const HuesGeneralToolbarIdentifier = @"general";
NSString * const HuesColorPickersToolbarIdentifier = @"colorpickers";
NSString * const HuesAdvancedToolbarIdentifier = @"advanced";

@implementation HuesPreferencesController

@synthesize currentToolbarIdentifier, currentView, toolbar, view, generalView, colorPickersView, advancedView;

- (void)dealloc
{
  self.currentToolbarIdentifier = nil;
  self.toolbar = nil;
  self.view = nil;
  self.generalView = nil;
  self.colorPickersView = nil;
  self.advancedView = nil;
  
  [super dealloc];
}


- (void)awakeFromNib
{
  self.currentToolbarIdentifier = HuesGeneralToolbarIdentifier;
  [self.toolbar setSelectedItemIdentifier:HuesGeneralToolbarIdentifier];
  [[self window] setTitle:@"General"];
  self.currentView = self.generalView;
}


- (void)toolbarItemSelected:(id)sender
{
  NSString *identifier = [sender itemIdentifier];
  
  if ([identifier isEqualToString:currentToolbarIdentifier]) return;
  
  self.currentToolbarIdentifier = identifier;
  [self.toolbar setSelectedItemIdentifier:identifier];
  
  if ([identifier isEqualToString:HuesGeneralToolbarIdentifier])
  {
    [[self window] setTitle:@"General"];
    self.currentView = self.generalView;
  }
  else if ([identifier isEqualToString:HuesColorPickersToolbarIdentifier])
  {
    [[self window] setTitle:@"Color Pickers"];
    self.currentView = self.colorPickersView;
  }
  else if ([identifier isEqualToString:HuesAdvancedToolbarIdentifier])
  {
    [[self window] setTitle:@"Advanced"];
    self.currentView = self.advancedView;
  }
}


- (void)setCurrentView:(NSView *)aView
{
  NSRect newFrame = [[self window] frame];
  newFrame.size.height = [aView frame].size.height + ([[self window] frame].size.height - [self.view frame].size.height);
  newFrame.origin.y += ([self.view frame].size.height - [aView frame].size.height);
  
  [currentView removeFromSuperview];
  [[self window] setFrame:newFrame display:YES animate:YES];
  [self.view addSubview:aView];
  
  currentView = aView;
}


@end
