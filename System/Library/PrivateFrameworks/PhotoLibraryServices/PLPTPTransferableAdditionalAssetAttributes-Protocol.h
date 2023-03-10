//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSNumber, NSString, PLSpatialOverCaptureInformation;

@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>
@property(readonly, retain, nonatomic) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property(readonly, nonatomic) long long ptpTrashedState;
@property(readonly, retain, nonatomic) NSString *exifTimestampString;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property(readonly, copy, nonatomic) NSString *originatingAssetIdentifier;
@property(readonly, copy, nonatomic) NSString *masterFingerPrint;
@end

