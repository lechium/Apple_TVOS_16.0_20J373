//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VCPMADOCRLibraryProcessingTask
{
}

+ (id)fetchPropertySets;	// IMP=0x00200000000b1f8f
+ (unsigned long long)taskID;	// IMP=0x00100000000b1f84
+ (id)name;	// IMP=0x00100000000b1f77
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b1ec5
- (id)assetPriorityPredicates;	// IMP=0x00400000000b20c6
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b20ad
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x00100000000b2098
- (void)dealloc;	// IMP=0x00100000000b2015

@end

