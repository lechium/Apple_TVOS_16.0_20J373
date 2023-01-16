//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PHPhotoLibrary;

@interface VCPMediaAnalysisServiceTask : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSArray *_localIdentifiers;	// 16 = 0x10
    _Bool _cancel;	// 24 = 0x18
    _Bool _noResultStrip;	// 25 = 0x19
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    _Bool _realTime;	// 48 = 0x30
}

+ (id)taskForPhotoLibrary:(id)arg1 withAssetLocalIdentifiers:(id)arg2 realTime:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0020000000053425
- (void).cxx_destruct;	// IMP=0x00200000000547de
@property(readonly) _Bool realTime; // @synthesize realTime=_realTime;
- (_Bool)autoCancellable;	// IMP=0x00100000000547cb
- (int)run;	// IMP=0x0010000000054239
- (int)analyzeAsset:(id)arg1 analyses:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x001000000005378a
- (double)totalProgressWeight:(id)arg1;	// IMP=0x00100000000535d6
- (double)progressWeight:(id)arg1;	// IMP=0x0010000000053522
- (void)cancel;	// IMP=0x0010000000053518
- (float)resourceRequirement;	// IMP=0x001000000005350a
- (id)initWithPhotoLibrary:(id)arg1 withAssetLocalIdentifiers:(id)arg2 realTime:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000532d4

@end

