//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/PBSMutableAppInfo.h>

@class NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBMutableAppInfo : PBSMutableAppInfo
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

+ (long long)_mapApplicationTypeString:(id)arg1;	// IMP=0x00200000000d453f
+ (long long)_mapInstallFailureReason:(id)arg1;	// IMP=0x00100000000d44d9
+ (long long)_mapInstallType:(unsigned long long)arg1;	// IMP=0x00100000000d44ca
+ (long long)_mapProgressState:(long long)arg1;	// IMP=0x00100000000d44b6
+ (long long)_mapApplicationGenreID:(id)arg1;	// IMP=0x00100000000d4480
+ (long long)_mapApplicationType:(unsigned long long)arg1;	// IMP=0x00100000000d446b
- (void).cxx_destruct;	// IMP=0x00200000000d4616
@property(retain, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(retain, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x00100000000d4463
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d442c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d43f5
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d409c
- (id)initWithAppInfo:(id)arg1;	// IMP=0x00100000000d3fcc
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x00100000000d3ccb
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x00100000000d38d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

