//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSNumber, UIGestureRecognizer;

@protocol PBSystemGestureActivationContext <NSObject>
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property(readonly, nonatomic) NSNumber *timestamp;
@property(readonly, nonatomic) unsigned long long senderID;
@property(readonly, nonatomic, getter=isSystemGestureCancellation) _Bool systemGestureCancellation;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) unsigned long long gestureRecognizerType;
@end

