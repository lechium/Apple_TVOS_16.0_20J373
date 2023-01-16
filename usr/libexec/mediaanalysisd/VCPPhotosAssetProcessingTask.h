//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSArray, NSURL;

@interface VCPPhotosAssetProcessingTask : VCPMABaseTask
{
    unsigned long long _processingTypes;	// 8 = 0x8
    NSArray *_localIdentifiers;	// 16 = 0x10
    NSURL *_photoLibraryURL;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
}

+ (id)taskWithProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withProgressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0040000000099b18
- (void).cxx_destruct;	// IMP=0x002000000009a5d9
- (_Bool)run:(id *)arg1;	// IMP=0x0010000000099bd5
- (id)initWithProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withProgressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000099a2f

@end
