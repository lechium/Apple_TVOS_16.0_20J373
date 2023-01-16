//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/PBSAppInfo.h>

@class FBSSceneIdentity, NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBAppInfo : PBSAppInfo
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00100000000d389e
@property(readonly, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(readonly, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x00100000000d3874
- (Class)classForCoder;	// IMP=0x00100000000d3852
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d381b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d380f
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d34b6
- (id)initWithAppInfo:(id)arg1;	// IMP=0x00100000000d33e6
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x00100000000d3368
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x00100000000d32ea
@property(readonly, nonatomic) FBSSceneIdentity *defaultSceneIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

