//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject
{
}

- (id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000765c6
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076545
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000764ae
- (id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076410
- (id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(_Bool)arg2;	// IMP=0x00000000000763f7
- (_Bool)writeData:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000763dd
- (id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;	// IMP=0x00000000000763c8
- (id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;	// IMP=0x0000000000076358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

