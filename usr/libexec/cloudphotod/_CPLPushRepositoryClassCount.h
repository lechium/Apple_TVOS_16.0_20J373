//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _CPLPushRepositoryClassCount : NSObject
{
    unsigned long long;	// 8 = 0x8
    unsigned long long _modifies;	// 16 = 0x10
    unsigned long long _deletes;	// 24 = 0x18
    unsigned long long _trashed;	// 32 = 0x20
}

@property(nonatomic) unsigned long long trashed; // @synthesize trashed=_trashed;
@property(nonatomic) unsigned long long deletes; // @synthesize deletes=_deletes;
@property(nonatomic) unsigned long long modifies; // @synthesize modifies=_modifies;
@property(nonatomic) unsigned long long adds; // @synthesize adds=_adds;
- (id)description;	// IMP=0x0010000000062708

@end

