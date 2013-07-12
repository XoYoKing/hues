//
//  HUPreferences.h
//  Hues
//
//  Created by Zach Waugh on 12/21/10.
//  Copyright 2010 Giant Comet. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "HuesDefines.h"

// Preferences keys
extern NSString * const HuesCopyToClipboardKey;
extern NSString * const HuesUseLowercaseKey;
extern NSString * const HuesDefaultColorRepresentationKey;
extern NSString * const HuesKeepOnTopKey;
extern NSString * const HuesApplicationModeKey;
extern NSString * const HuesLoupeShortcutKey;

@interface HuesPreferences : NSObject

+ (void)registerDefaults;

+ (BOOL)copyToClipboard;
+ (void)setCopyToClipboard:(BOOL)copy;

+ (HuesColorRepresentation)defaultRepresentation;

+ (NSArray *)colorFormats;
+ (void)setColorFormats:(NSArray *)formats;

+ (BOOL)useLowercase;
+ (void)setUseLowercase:(BOOL)lowercase;
//+ (BOOL)useCalibratedColors;
//+ (void)setCalibratedColors:(BOOL)calibrated;

+ (HuesApplicationMode)applicationMode;
+ (void)setApplicationMode:(HuesApplicationMode)mode;
+ (BOOL)keepOnTop;
+ (void)setKeepOnTop:(BOOL)keepOnTop;

@end
