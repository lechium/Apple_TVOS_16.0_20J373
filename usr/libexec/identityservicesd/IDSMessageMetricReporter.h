//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSMessageMetricReporter : NSObject
{
}

+ (_Bool)_shouldIgnoreAutoBugCaptureForLegacyFailure:(id)arg1;	// IMP=0x004000000005c8a0
+ (_Bool)_shouldIgnoreMPError:(id)arg1;	// IMP=0x001000000005c810
+ (_Bool)_shouldIgnoreAutoBugCaptureForECFailure:(id)arg1;	// IMP=0x001000000005c690
+ (void)noteKeyGenerationForMetric;	// IMP=0x001000000005c5c0
+ (id)errorToReportForLegacyError:(id)arg1;	// IMP=0x001000000005c160
+ (id)errorToReportForECError:(id)arg1;	// IMP=0x001000000005bd00
+ (void)reportMessageMetricWithMetadata:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 command:(id)arg4 decryptedEqual:(_Bool)arg5 triedLastResort:(_Bool)arg6 ECError:(id)arg7 legacyError:(id)arg8 fromDestination:(id)arg9;	// IMP=0x001000000005a350
+ (void)reportEncryptionSideMetricWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x0010000000059df0
+ (id)messageMetadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x0010000000059c20
+ (id)_metadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x00100000000597d0

@end
