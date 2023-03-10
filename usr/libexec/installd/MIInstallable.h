//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIBundle, NSDictionary, NSURL;

@interface MIInstallable : NSObject
{
    unsigned char _packageFormat;	// 8 = 0x8
    NSDictionary *_userOptions;	// 16 = 0x10
    unsigned long long _installationDomain;	// 24 = 0x18
    NSURL *_stagingRootURL;	// 32 = 0x20
    MIBundle *_bundle;	// 40 = 0x28
    CDUnknownBlockType _progressBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000034fb0
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) MIBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) unsigned char packageFormat; // @synthesize packageFormat=_packageFormat;
@property(readonly, nonatomic) NSURL *stagingRootURL; // @synthesize stagingRootURL=_stagingRootURL;
@property(readonly, nonatomic) unsigned long long installationDomain; // @synthesize installationDomain=_installationDomain;
@property(readonly, nonatomic) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
- (id)description;	// IMP=0x0010000000034dee
- (id)launchServicesBundleRecordsWithError:(id *)arg1;	// IMP=0x0010000000034de1
- (_Bool)finalizeInstallationWithError:(id *)arg1;	// IMP=0x0010000000034dd9
- (_Bool)postFlightInstallationWithError:(id *)arg1;	// IMP=0x0010000000034dd1
- (_Bool)performInstallationWithError:(id *)arg1;	// IMP=0x0010000000034dc9
- (_Bool)performVerificationWithError:(id *)arg1;	// IMP=0x0010000000034dc1
- (_Bool)performPreflightWithError:(id *)arg1;	// IMP=0x0010000000034daf
- (_Bool)applyPatchWithError:(id *)arg1;	// IMP=0x0010000000034da7
@property(readonly, nonatomic) _Bool shouldModifyExistingContainers;
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(unsigned char)arg3 domain:(unsigned long long)arg4 userOptions:(id)arg5 error:(id *)arg6;	// IMP=0x0010000000034cbd

@end

