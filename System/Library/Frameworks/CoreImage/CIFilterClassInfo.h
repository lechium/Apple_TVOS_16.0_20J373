//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIFilterClassInfo : NSObject
{
    NSArray *inputKeys;	// 8 = 0x8
    NSArray *inputClasses;	// 16 = 0x10
    NSArray *outputKeys;	// 24 = 0x18
}

+ (id)classInfoForClass:(Class)arg1;	// IMP=0x00600000000a02fe
- (id)outputKeys;	// IMP=0x00000000000a0f4f
- (id)inputClasses;	// IMP=0x00000000000a0f45
- (id)inputKeys;	// IMP=0x00000000000a0f3b
- (id)description;	// IMP=0x00000000000a0ea4
- (id)initWithClass:(Class)arg1;	// IMP=0x00000000000a05ad
- (id)init;	// IMP=0x00000000000a0599
- (void)dealloc;	// IMP=0x00000000000a0548

@end

