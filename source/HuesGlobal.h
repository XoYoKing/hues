//
//  HuesGlobal.h
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


// Preferences keys
extern NSString * const HuesCopyToClipboardKey;
extern NSString * const HuesUseLowercaseKey;
extern NSString * const HuesDefaultColorRepresentationKey;
extern NSString * const HuesHexFormatKey;
extern NSString * const HuesRGBFormatKey;
extern NSString * const HuesRGBAFormatKey;
extern NSString * const HuesHSBFormatKey;
extern NSString * const HuesHSLFormatKey;
extern NSString * const HuesHSLAFormatKey;

// NSColorPanelWheelModeMask            - Color Wheel
// NSColorPanelGrayModeMask             - Color Sliders
// NSColorPanelRGBModeMask              - Color Sliders
// NSColorPanelCMYKModeMask             - Color Sliders
// NSColorPanelHSBModeMask              - Color Sliders
// NSColorPanelColorListModeMask        - Color Palettes
// NSColorPanelCustomPaletteModeMask    - Image Palettes
// NSColorPanelCrayonModeMask           - Crayons
// NSColorPanelAllModesMask             - All
extern NSString * const HuesShowColorWheelPickerKey;
extern NSString * const HuesShowColorSlidersGrayPickerKey;
extern NSString * const HuesShowColorSlidersRGBPickerKey;
extern NSString * const HuesShowColorSlidersCMYKPickerKey;
extern NSString * const HuesShowColorSlidersHSBPickerKey;
extern NSString * const HuesShowColorPalettesPickerKey;
extern NSString * const HuesShowImagePalettesPickerKey;
extern NSString * const HuesShowCrayonsPickerKey;


enum
{
  HuesHexRepresentation,
  HuesRGBRepresentation,
  HuesHSLRepresentation
};

typedef NSInteger HuesColorRepresentation;

// Notifications
extern NSString * const HuesUpdateColorNotification;