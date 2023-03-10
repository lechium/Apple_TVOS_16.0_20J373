//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCKResourceDownloadOperation : NSObject
{
}

+ (id)fetchRawDerivativesUploadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0020000000148600
+ (id)assetDownloadOperationFor:(id)arg1 key:(id)arg2 fingerPrint:(id)arg3 downloadType:(long long)arg4 timeRange:(CDStruct_e83c9415)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000001482b0
+ (id)fetchDerivativesUploadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001475d0
+ (id)inMemoryDownloadOperationForRecordID:(id)arg1 resource:(id)arg2 record:(id)arg3 keys:(id)arg4 downloadType:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000146b10
+ (id)streamOperationForRecordID:(id)arg1 key:(id)arg2 downloadType:(long long)arg3 filename:(id)arg4 timeRange:(CDStruct_e83c9415)arg5 mediaRequestHints:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0010000000145810
+ (id)downloadOperationWithRecordIDsAndTasks:(id)arg1 keys:(id)arg2 downloadType:(long long)arg3 perRecordProgressBlock:(CDUnknownBlockType)arg4 perRecordCompletionBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000143c10
- (id)init;	// IMP=0x0040000000148690

@end

