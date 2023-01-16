//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class INIntent;
@protocol INIntentDelivering;

@protocol INIntentDeliveringDelegate <NSObject>

@optional
- (void)intentDeliverer:(id <INIntentDelivering>)arg1 deliverIntent:(INIntent *)arg2 withBlock:(void (^)(id))arg3;
@end
