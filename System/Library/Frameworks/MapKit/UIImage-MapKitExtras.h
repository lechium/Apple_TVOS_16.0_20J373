//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class NSString;

@interface UIImage (MapKitExtras)
+ (id)_mapkit_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000002af6d
+ (id)_mapkit_imageNamed:(id)arg1;	// IMP=0x001000000002aedc
+ (id)_mapkit_liveTransitIndicatorImageUsingDarkMode:(_Bool)arg1;	// IMP=0x00100000001d76b2
+ (id)_mapkit_liveTransitIndicatorImageApplyingColorForStatus:(long long)arg1 darkMode:(_Bool)arg2;	// IMP=0x00100000001d7635
+ (id)_mapkit_imageFromVKImage:(id)arg1;	// IMP=0x00100000001f6485
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;	// IMP=0x00100000001f63d8
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 nightMode:(_Bool)arg4;	// IMP=0x00100000001f6336
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;	// IMP=0x00100000001f6321
- (id)_mapkit_imageWithAlpha:(double)arg1;	// IMP=0x001000000002b435
- (id)_mapkit_templateImageWithTintColor:(id)arg1;	// IMP=0x001000000002b289
- (id)_mapkit_horizontallyFlippedImage;	// IMP=0x001000000002b18f
- (id)_mapkit_dimmedImage;	// IMP=0x001000000002b014
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x00100000000693ce
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x00100000000693c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

