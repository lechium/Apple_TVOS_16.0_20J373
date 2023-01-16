//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboardInputMode.h"

@class NSExtension;

__attribute__((visibility("hidden")))
@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode
{
    NSExtension *_extension;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000084556c
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (id)_indicatorIconWithBackground:(_Bool)arg1 scaleFactor:(double)arg2;	// IMP=0x000000000084534d
- (_Bool)isDesiredForTraits:(id)arg1;	// IMP=0x000000000084512a
- (_Bool)isAllowedForTraits:(id)arg1;	// IMP=0x0000000000845118
- (id)normalizedIdentifierLevels;	// IMP=0x000000000084510b
- (id)identifierWithLayouts;	// IMP=0x00000000008450f9
- (id)containingBundleDisplayName;	// IMP=0x000000000084507f
- (id)containingBundle;	// IMP=0x0000000000844fd0
- (_Bool)isExtensionInputMode;	// IMP=0x0000000000844fc8
- (_Bool)isStalledExtensionInputMode;	// IMP=0x0000000000844edc
- (_Bool)defaultLayoutIsASCIICapable;	// IMP=0x0000000000844e40
- (_Bool)isDefaultRightToLeft;	// IMP=0x0000000000844da4
- (id)extendedDisplayName;	// IMP=0x0000000000844c5d
- (id)displayName;	// IMP=0x0000000000844b8b
- (id)hardwareLayout;	// IMP=0x000000000084445e
- (_Bool)showSWLayoutWithHWKeyboard;	// IMP=0x00000000008443da
- (void)setPrimaryLanguage:(id)arg1;	// IMP=0x00000000008442ad
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000843da9

@end
