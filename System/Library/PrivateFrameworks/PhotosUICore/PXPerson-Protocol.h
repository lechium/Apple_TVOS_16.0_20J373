//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol NSFastEnumeration;

@protocol PXPerson <NSObject>
+ (void)px_loadRepresentativeFacesForPersons:(id <NSFastEnumeration>)arg1;
@property(readonly) _Bool isPersonModel;
@property(readonly) _Bool isVerified;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) NSString *px_longStyleLocalizedName;
@property(readonly) NSString *px_localizedName;
@property(readonly) NSString *name;
@property(readonly) unsigned long long numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(_Bool)arg4 boundFaceRect:(_Bool)arg5 completionBlock:(void (^)(UIImage *, struct CGRect, NSError *))arg6;

@optional
@property(readonly) NSDate *px_keyPhotoDate;
@end
