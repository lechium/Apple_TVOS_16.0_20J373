//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class _UITabBarSettings;

__attribute__((visibility("hidden")))
@interface _UIBarSettings : PTSettings
{
    _Bool _retainShadow;	// 8 = 0x8
    _Bool _colorByBarType;	// 9 = 0x9
    long long _backgroundMode;	// 16 = 0x10
    _UITabBarSettings *_tabBarSettings;	// 24 = 0x18
}

+ (id)settingsControllerModule;	// IMP=0x00600000010a9280
- (void).cxx_destruct;	// IMP=0x00000000010a96a0
@property(retain, nonatomic) _UITabBarSettings *tabBarSettings; // @synthesize tabBarSettings=_tabBarSettings;
@property(nonatomic) _Bool colorByBarType; // @synthesize colorByBarType=_colorByBarType;
@property(nonatomic) _Bool retainShadow; // @synthesize retainShadow=_retainShadow;
@property(nonatomic) long long backgroundMode; // @synthesize backgroundMode=_backgroundMode;
- (void)setDefaultValues;	// IMP=0x00000000010a9217

@end

