//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIOldCGImageDecompressor
{
    struct CGImage *_imageRef;	// 8 = 0x8
    long long _orientation;	// 16 = 0x10
}

- (struct CGImage *)waitForImageRef;	// IMP=0x00000000010bef82
- (void)dealloc;	// IMP=0x00000000010bef41
- (unsigned long long)hash;	// IMP=0x00000000010bef1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010beeb2

@end

