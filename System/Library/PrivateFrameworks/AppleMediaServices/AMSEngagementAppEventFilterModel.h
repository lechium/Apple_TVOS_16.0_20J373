//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSEngagementAppEventFilterModel : NSObject
{
    NSDictionary *_definition;	// 8 = 0x8
}

+ (_Bool)matchEvent:(id)arg1 toFilter:(id)arg2;	// IMP=0x00600000001a7d6f
- (void).cxx_destruct;	// IMP=0x00000000001a831e
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
- (_Bool)matchesEvent:(id)arg1;	// IMP=0x00000000001a7c96
- (id)exportObject;	// IMP=0x00000000001a7bef
@property(readonly, nonatomic) unsigned long long components;
@property(readonly, nonatomic) _Bool allowsResponse;
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000001a7a11
- (id)initWithCacheObject:(id)arg1;	// IMP=0x00000000001a7974
- (id)init;	// IMP=0x00000000001a7960

@end
