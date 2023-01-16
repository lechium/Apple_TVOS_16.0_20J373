//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VCPPhotosMaintenanceProcessingTask : NSObject
{
    struct atomic<bool> _cancel;	// 8 = 0x8
    struct atomic<bool> _started;	// 9 = 0x9
    NSArray *_photoLibraries;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    CDUnknownBlockType _cancelBlock;	// 40 = 0x28
}

+ (id)taskWithPhotoLibraries:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3 andCancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00200000000b2334
- (void).cxx_destruct;	// IMP=0x00200000000b660f
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x00100000000b65ee
- (int)run;	// IMP=0x00100000000b64d2
- (int)_collectAndReportAnalysisProgress;	// IMP=0x00100000000b598b
- (void)_queryAndReportProgressForAnalysis:(unsigned long long)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x00100000000b5773
- (void)_queryAndReportProgressForPrioritizedFaceAnalysisForPhotoLibrary:(id)arg1;	// IMP=0x00100000000b55f3
- (void)_queryAndReportProgressForPhotoLibrary:(id)arg1 withAnalysisType:(unsigned long long)arg2 andQueryKeys:(id)arg3;	// IMP=0x00100000000b4cc0
- (id)_getCompleteDateBasedOn:(unsigned long long)arg1 fromDatabase:(id)arg2 withCompleteTimestampKey:(id)arg3 coreAnalyticsEventKey:(id)arg4 currentDate:(id)arg5 andStartDate:(id)arg6;	// IMP=0x00100000000b490c
- (id)_getStartDateFromDatabase:(id)arg1 withStartTimestampKey:(id)arg2 coreAnalyticsEventKey:(id)arg3 andCurrentDate:(id)arg4;	// IMP=0x00100000000b4613
- (unsigned long long)_computeProgressPercentageWithProcessedCount:(unsigned long long)arg1 andTotalCount:(unsigned long long)arg2;	// IMP=0x00100000000b4598
- (int)_backupPhotoLibrary:(id)arg1;	// IMP=0x00100000000b3f85
- (int)_createBackupAtFilepath:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x00100000000b2e5d
- (void)_touchExistingBackup:(id)arg1;	// IMP=0x00100000000b2ae8
- (_Bool)_shouldPerformBackup:(id)arg1;	// IMP=0x00100000000b24d8
- (_Bool)isCancelled;	// IMP=0x00100000000b24b4
- (void)cancel;	// IMP=0x00100000000b24a9
- (float)resourceRequirement;	// IMP=0x00100000000b249b
- (void)dealloc;	// IMP=0x00100000000b2413
- (id)initWithPhotoLibraries:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3 andCancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b21ee
- (id)init;	// IMP=0x00100000000b21e0

@end
