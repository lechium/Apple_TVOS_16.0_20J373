//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLFunctionConstant.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantInternal : MTLFunctionConstant
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
    _Bool _required;	// 32 = 0x20
}

- (_Bool)required;	// IMP=0x00000000000825f8
- (unsigned long long)index;	// IMP=0x00000000000825e7
- (unsigned long long)type;	// IMP=0x00000000000825d6
- (id)name;	// IMP=0x00000000000825c5
- (id)description;	// IMP=0x00000000000825b1
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000082405
- (void)dealloc;	// IMP=0x00000000000823c3
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(_Bool)arg4;	// IMP=0x0000000000082334

@end

