//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGAXElement-Protocol.h>

@class NSObject, NSString;
@protocol PXAnonymousView, PXDisplayAsset;

@protocol PXGAXInfo <PXGAXElement>
@property(readonly, nonatomic) NSObject<PXAnonymousView> *axView;
@property(readonly, nonatomic) id <PXDisplayAsset> axAsset;
@property(readonly, nonatomic) NSString *axImageName;
@property(readonly, nonatomic) NSString *axSubtitle;
@property(readonly, nonatomic) NSString *axTitle;
@property(readonly, nonatomic) NSString *axText;
@property(readonly, nonatomic) long long axContentKind;
@end

