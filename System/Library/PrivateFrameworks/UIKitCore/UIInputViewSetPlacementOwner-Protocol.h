//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class TUIInputAssistantHostView, UIInputViewSet, UIInputViewSetPlacement, UIView;
@protocol UIInputViewSetPlacementApplicator;

@protocol UIInputViewSetPlacementOwner <NSObject>
@property(readonly) TUIInputAssistantHostView *inputAssistantHostView;
@property _Bool hideInputView;
@property _Bool hideInputAssistantBackdrop;
@property(readonly) long long inputViewBackdropStyle;
@property _Bool hideInputViewBackdrops;
@property(readonly) UIView *containerView;
@property(readonly) UIView *hostView;
@property(readonly) struct UIEdgeInsets inputViewPadding;
@property(readonly) UIInputViewSet *inputViewSet;
@property(readonly, nonatomic) id <UIInputViewSetPlacementApplicator> applicator;
@property(readonly) UIInputViewSetPlacement *placement;
@property(readonly) _Bool keyboardController;
@end

