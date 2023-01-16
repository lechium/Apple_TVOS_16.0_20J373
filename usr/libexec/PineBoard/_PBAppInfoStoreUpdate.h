//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface _PBAppInfoStoreUpdate : NSObject
{
    long long _updateType;	// 8 = 0x8
    NSSet *_applicationInfos;	// 16 = 0x10
    NSSet *_placeholders;	// 24 = 0x18
}

+ (id)updateDynamicState;	// IMP=0x004000000001c849
+ (id)updatePolicy;	// IMP=0x001000000001c81c
+ (id)updatePlaceholders:(id)arg1;	// IMP=0x001000000001c7cb
+ (id)removePlaceholders:(id)arg1;	// IMP=0x001000000001c77a
+ (id)addPlaceholders:(id)arg1;	// IMP=0x001000000001c729
+ (id)updateLocalizations:(id)arg1;	// IMP=0x001000000001c6d7
+ (id)updateAlternateAppIcons:(id)arg1;	// IMP=0x001000000001c685
+ (id)demoteApplicationInfos:(id)arg1;	// IMP=0x001000000001c633
+ (id)updateApplicationInfos:(id)arg1;	// IMP=0x001000000001c5e1
+ (id)removeApplicationInfos:(id)arg1;	// IMP=0x001000000001c58f
+ (id)addApplicationInfos:(id)arg1;	// IMP=0x001000000001c540
- (void).cxx_destruct;	// IMP=0x002000000001cc05
@property(readonly, copy, nonatomic) NSSet *placeholders; // @synthesize placeholders=_placeholders;
@property(readonly, copy, nonatomic) NSSet *applicationInfos; // @synthesize applicationInfos=_applicationInfos;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
- (id)description;	// IMP=0x001000000001c97c
- (id)initWithType:(long long)arg1 applicationInfos:(id)arg2 placeholders:(id)arg3;	// IMP=0x001000000001c876

@end
