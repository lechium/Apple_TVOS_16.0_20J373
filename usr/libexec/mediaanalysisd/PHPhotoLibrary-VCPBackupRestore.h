//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@interface PHPhotoLibrary (VCPBackupRestore)
- (id)vcp_mediaAnalysisBackupFilepath;	// IMP=0x001000000005fb34
- (id)vcp_mediaAnalysisBackupDirectory;	// IMP=0x001000000005fad4
- (_Bool)vcp_openAndWaitWithUpgrade:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000c8934
- (int)_bumpFaceProcessingVersionIfNeededWithError:(id *)arg1;	// IMP=0x00100000000c8823
- (int)vcp_bumpFaceProcessingToVersion:(int)arg1 withError:(id *)arg2;	// IMP=0x00100000000c8615
- (int)_cacheCurrentFaceProgress;	// IMP=0x00100000000c84f3
- (int)_resetChangeTokenAndProcessingStatusForFaceProcessing;	// IMP=0x00100000000c82c1
@end

