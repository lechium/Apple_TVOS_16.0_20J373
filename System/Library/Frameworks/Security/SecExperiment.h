//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SecExperimentConfig;

__attribute__((visibility("hidden")))
@interface SecExperiment : NSObject
{
    _Bool _samplingDisabled;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    SecExperimentConfig *_cachedConfig;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f5ef
@property(retain) SecExperimentConfig *cachedConfig; // @synthesize cachedConfig=_cachedConfig;
@property(nonatomic) _Bool samplingDisabled; // @synthesize samplingDisabled=_samplingDisabled;
@property(retain) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *identifier;
- (id)copyExperimentConfiguration;	// IMP=0x000000000000f387
- (id)copyRandomExperimentConfigurationFromAsset:(id)arg1;	// IMP=0x000000000000f2fb
- (id)copyRemoteExperimentAsset;	// IMP=0x000000000000f25a
- (id)copyExperimentConfigurationFromUserDefaults;	// IMP=0x000000000000f113
- (_Bool)isSamplingDisabled;	// IMP=0x000000000000f0e2
- (_Bool)isSamplingDisabledWithDefault:(_Bool)arg1;	// IMP=0x000000000000ef6d
- (_Bool)experimentIsAllowedForProcess;	// IMP=0x000000000000eeae
- (id)initWithName:(const char *)arg1;	// IMP=0x000000000000ee08

@end

