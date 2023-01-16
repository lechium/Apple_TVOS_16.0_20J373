//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

__attribute__((visibility("hidden")))
@interface _CUIThemePDFRendition : CUIThemeRendition
{
    struct CGPDFDocument *_pdfDocument;	// 216 = 0xd8
}

- (struct CGImage *)createImageFromPDFRenditionWithScale:(double)arg1;	// IMP=0x000000000004877d
- (struct CGPDFDocument *)pdfDocument;	// IMP=0x000000000004876c
- (id)metrics;	// IMP=0x0000000000048764
- (int)pixelFormat;	// IMP=0x0000000000048759
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000004852c
- (void)dealloc;	// IMP=0x00000000000484eb
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x00000000000484d9

@end

