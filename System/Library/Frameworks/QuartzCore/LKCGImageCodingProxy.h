//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LKCGImageCodingProxy
{
    struct CGImage *_image;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001fa0c
- (void)dealloc;	// IMP=0x000000000001f795
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f54f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f35d
- (id)decodedObject;	// IMP=0x000000000001f34c
- (id)initWithObject:(id)arg1;	// IMP=0x000000000001f15c

@end
