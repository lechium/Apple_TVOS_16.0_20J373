//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15_MapKit_SwiftUI21SwiftUIAnnotationView : MKAnnotationView
{
    MISSING_TYPE *wrappedView;	// 8 = 0x8
    MISSING_TYPE *contentAnchorPoint;	// 16 = 0x10
    MISSING_TYPE *model;	// 32 = 0x20
    MISSING_TYPE *hostView;	// 40 = 0x28
}

+ (_Bool)_wantsViewBasedPositioning;	// IMP=0x004000000000cd70
- (void).cxx_destruct;	// IMP=0x000000000000cdd0
@property(nonatomic, readonly) struct UIEdgeInsets safeAreaInsets;
- (void)prepareForReuse;	// IMP=0x000000000000ccf0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ccc0
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000000cb00

@end

