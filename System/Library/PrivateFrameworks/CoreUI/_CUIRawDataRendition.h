//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface _CUIRawDataRendition : CUIThemeRendition
{
    NSData *_dataBytes;	// 216 = 0xd8
}

- (id)data;	// IMP=0x000000000006e739
- (int)pixelFormat;	// IMP=0x000000000006e72e
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000006e549
- (void)dealloc;	// IMP=0x000000000006e503
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000006e4f1

@end

