//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VKMapView;

__attribute__((visibility("hidden")))
@interface _MKMapLayerHostingView : UIView
{
    VKMapView *_mapView;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x00000000000baf2c
- (void).cxx_destruct;	// IMP=0x00000000000bb17d
@property(retain, nonatomic) VKMapView *mapView; // @synthesize mapView=_mapView;
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000bb0d2
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000bb049
- (void)dealloc;	// IMP=0x00000000000bafdc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000baf3d

@end

