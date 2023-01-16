//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, NSUndoManager, PXWidgetCompositionElement;
@protocol PXAnonymousViewController;

@protocol PXWidgetCompositionElementDelegate <NSObject>
- (NSUndoManager *)elementUndoManager:(PXWidgetCompositionElement *)arg1;
- (NSObject<PXAnonymousViewController> *)elementViewController:(PXWidgetCompositionElement *)arg1;

@optional
- (_Bool)element:(PXWidgetCompositionElement *)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
- (_Bool)element:(PXWidgetCompositionElement *)arg1 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg2 withTransitionType:(long long)arg3;
@end

