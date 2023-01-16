//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFaceCropUtils : NSObject
{
}

+ (struct CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000f5c03
+ (id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000f59a7
+ (struct CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000f56ff
+ (struct CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000f5457
+ (_Bool)isValidFaceCrop:(id)arg1;	// IMP=0x00800000000f52c7
+ (id)newFaceCropFromImageData:(id)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000f4f9e
+ (id)newFaceCropFromImageURL:(id)arg1 withNormalizedFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000f497e
+ (id)newFaceCropFromCGImageSource:(const struct CGImageSource *)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000f3302
+ (id)imageCreationOptions;	// IMP=0x00800000000f320f
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect)arg1 andCropRegion:(struct CGRect)arg2 andGroupingIdentifier:(id)arg3;	// IMP=0x00800000000f30f6
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;	// IMP=0x00800000000f2ebc
+ (struct CGImageMetadata *)createOutputMetadataFromDictionary:(id)arg1;	// IMP=0x00800000000f2bdc

@end

