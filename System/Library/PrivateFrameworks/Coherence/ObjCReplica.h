//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID;

__attribute__((visibility("hidden")))
@interface ObjCReplica : NSObject
{
    MISSING_TYPE *uuid;	// 0 = 0x0
    MISSING_TYPE *index;	// 2004049759 = 0x77735f5f
}

- (void).cxx_destruct;	// IMP=0x00000000001248e0
- (id)init;	// IMP=0x0000000000124890
- (id)initWithUuid:(id)arg1 index:(long long)arg2;	// IMP=0x00000000001247d0
@property(nonatomic) long long index; // @synthesize index;
@property(nonatomic, copy) NSUUID *uuid;

@end

