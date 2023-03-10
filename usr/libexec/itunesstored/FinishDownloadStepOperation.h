//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadStepOperation : ISOperation
{
    FinishDownloadMemoryEntity *_download;	// 96 = 0x60
    NSString *_downloadPhase;	// 104 = 0x68
    double _progressFraction;	// 112 = 0x70
    CDUnknownBlockType _outputBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000e2a5f
@property(readonly, nonatomic) FinishDownloadMemoryEntity *download; // @synthesize download=_download;
- (id)_newURLOperationWithAsset:(id)arg1;	// IMP=0x00100000000e2822
- (_Bool)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000e239e
- (_Bool)unzipAsset:(id)arg1 unzippedPath:(id *)arg2 error:(id *)arg3;	// IMP=0x00100000000e220d
@property double progressFraction;
@property(copy) CDUnknownBlockType outputBlock;
@property(copy) NSString *downloadPhase;
- (_Bool)rollbackAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e1bce
- (_Bool)removeInstalledAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e1579
- (_Bool)moveFile:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000000e0b8b
- (_Bool)moveAsset:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000000e0a8c
- (_Bool)installAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e08df
- (void)finishWithDownloadResponse:(id)arg1;	// IMP=0x00100000000e07f4
- (_Bool)downloadAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e04cf
- (_Bool)downloadAndInstallAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dfdcd
- (id);	// IMP=0x00100000000dfb46
- (void)addPurchaseManifestItemWithLibraryIdentifier:(id)arg1;	// IMP=0x00100000000df868
- (void)addPurchaseManifestItem;	// IMP=0x00100000000df854
- (id)initWithDownload:(id)arg1;	// IMP=0x00100000000df7e6

@end

