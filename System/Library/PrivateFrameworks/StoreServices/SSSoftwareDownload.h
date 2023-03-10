//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SSDownload.h"

@class ASDJob;

__attribute__((visibility("hidden")))
@interface SSSoftwareDownload : SSDownload
{
    ASDJob *_job;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000018e34e
@property(readonly, nonatomic) ASDJob *job; // @synthesize job=_job;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;	// IMP=0x000000000018e19f
- (void)setDownloadPolicy:(id)arg1;	// IMP=0x000000000018e001
- (void)setDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000018de63
- (void)setBackgroundNetworkingUserInitiated:(_Bool)arg1;	// IMP=0x000000000018dcc5
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;	// IMP=0x000000000018db27
- (void)restart;	// IMP=0x000000000018d989
- (void)resume;	// IMP=0x000000000018d7eb
- (_Bool)removeAsset:(id)arg1;	// IMP=0x000000000018d64b
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000018d4ad
- (void)pause;	// IMP=0x000000000018d30f
- (_Bool)isEligibleForRestore:(id *)arg1;	// IMP=0x000000000018d16f
- (_Bool)isBackgroundNetworkingUserInitiated;	// IMP=0x000000000018cfcf
- (double)estimatedSecondsRemaining;	// IMP=0x000000000018ce29
- (long long)downloadSizeLimit;	// IMP=0x000000000018cc89
- (id)downloadPolicy;	// IMP=0x000000000018cae9
- (long long)bytesTotal;	// IMP=0x000000000018c949
- (long long)bytesDownloaded;	// IMP=0x000000000018c7a9
- (id)backgroundNetworkingJobGroupName;	// IMP=0x000000000018c609
- (_Bool)addAsset:(id)arg1 forType:(id)arg2;	// IMP=0x000000000018c469
- (id)assetsForType:(id)arg1;	// IMP=0x000000000018c2c9
- (id)status;	// IMP=0x000000000018c129
- (void)setStatus:(id)arg1;	// IMP=0x000000000018bf8b
- (void)setNetworkConstraints:(id)arg1;	// IMP=0x000000000018bded
- (void)setMetadata:(id)arg1;	// IMP=0x000000000018bc4f
- (id)networkConstraints;	// IMP=0x000000000018baaf
- (id)metadata;	// IMP=0x000000000018b90f
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000018b7b1
- (void)_becomeManagedOnConnection:(id)arg1;	// IMP=0x000000000018b7ab
- (double)percentComplete;	// IMP=0x000000000018b78e
- (id)failureError;	// IMP=0x000000000018b771
- (id)downloadPhaseIdentifier;	// IMP=0x000000000018b732
- (_Bool)isCancelable;	// IMP=0x000000000018b6fc
- (id)initWithPersistentIdentifier:(long long)arg1;	// IMP=0x000000000018b541
- (id)initWithJob:(id)arg1;	// IMP=0x000000000018b4c0

@end

