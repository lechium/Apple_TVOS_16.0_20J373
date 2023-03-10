//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

@class NSData, NSDate, NSString;

@interface PHAsset (PVAssetProtocol)
+ (id)vcp_fetchOptionsForLibrary:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x0010000000191135
+ (double)vcp_ocrGatingThreshold;	// IMP=0x0010000000193203
+ (id)vcp_fetchAssetsMatchingFingerprint:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x00100000001ecfed
+ (_Bool)vcp_usePHFaceExpression;	// IMP=0x001000000026466e
+ (_Bool)vcp_usePHFace;	// IMP=0x0010000000264666
+ (unsigned long long)vcp_fullAnalysisTypesForAssetType:(unsigned long long)arg1;	// IMP=0x0010000000273bbd
- (id)clsDistanceIdentity;	// IMP=0x00100000000a46ec
- (_Bool)vcp_needsProcessingForTask:(unsigned long long)arg1;	// IMP=0x001000000019275f
- (unsigned long long)vcp_majorDimensionForResource:(id)arg1 withTargetResolution:(unsigned long long)arg2;	// IMP=0x0010000000192093
- (unsigned long long)vcp_targetMajorDimensionForImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 andMinPreferredMinorDimension:(unsigned long long)arg3;	// IMP=0x0010000000191d84
- (_Bool)vcp_hasAdjustments:(id)arg1;	// IMP=0x0010000000191bbc
- (_Bool)vcp_eligibleForVideoDownload:(id)arg1;	// IMP=0x0010000000190e44
- (id)vcp_modificationDate;	// IMP=0x0010000000190d5c
- (struct CGSize)vcp_originalSize;	// IMP=0x0010000000190cec
- (id)vcp_typeDescription;	// IMP=0x0010000000190bc8
- (_Bool)vcp_isSdofPhoto;	// IMP=0x00100000001928e2
- (_Bool)vcp_isLivePhoto;	// IMP=0x00100000001928c9
- (_Bool)vcp_isPano;	// IMP=0x00100000001928b4
- (_Bool)vcp_isMontageWithTaskID:(unsigned long long)arg1;	// IMP=0x0010000000192973
- (_Bool)vcp_isShortMovie;	// IMP=0x001000000019292d
- (_Bool)vcp_isVideoTimelapse;	// IMP=0x0010000000192914
- (_Bool)vcp_isVideoSlowmo;	// IMP=0x00100000001928fb
- (unsigned long long)vcp_abnormalImageDimensionForSceneNet;	// IMP=0x0010000000192f9c
- (id)vcp_confidenceForSceneIdentifier:(unsigned int)arg1;	// IMP=0x0010000000192cae
- (_Bool)vcp_needSceneProcessing;	// IMP=0x0010000000192bbb
- (unsigned long long)vcp_ocrMajorDimensionForResource:(id)arg1;	// IMP=0x0010000000193725
- (id)vcp_passedOCRGating;	// IMP=0x0010000000193211
- (_Bool)vcp_isDownloadGated;	// IMP=0x00100000001931a1
- (_Bool)vcp_needsOCRProcessing;	// IMP=0x0010000000193090
- (_Bool)vcp_needsVisualSearchProcessing;	// IMP=0x0010000000193987
- (id)vcp_fingerprint:(id)arg1;	// IMP=0x00100000001ecbec
- (_Bool)vcp_needFaceProcessing;	// IMP=0x0010000000265568
- (_Bool)vcp_quickFaceClassificationDone;	// IMP=0x0010000000265435
- (id)vcp_PHFaces:(id)arg1;	// IMP=0x001000000026532d
- (int)vcp_queryPHFaces:(unsigned long long *)arg1 results:(id *)arg2;	// IMP=0x00100000002649bf
- (struct CGRect)vcp_faceRectFrom:(id)arg1;	// IMP=0x001000000026474a
- (unsigned long long)vcp_flagsForPHFace:(id)arg1 withFaceRect:(struct CGRect)arg2;	// IMP=0x0010000000264676
- (unsigned long long)vcp_fullAnalysisTypesForResources:(id)arg1;	// IMP=0x0010000000273e0a
- (unsigned long long)vcp_fullAnalysisTypes;	// IMP=0x0010000000273c8b

// Remaining properties
@property(readonly, nonatomic) NSString *cloudIdentifier;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly, nonatomic) NSString *filename;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate;
@property(readonly, nonatomic) NSString *originalFilename;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly) Class superclass;
@end

