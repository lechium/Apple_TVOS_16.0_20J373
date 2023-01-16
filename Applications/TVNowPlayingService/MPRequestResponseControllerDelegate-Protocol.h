//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MPRequestResponseController, NSError;

@protocol MPRequestResponseControllerDelegate <NSObject>

@optional
- (void)didFinishLoadingRequestForController:(MPRequestResponseController *)arg1;
- (void)willBeginLoadingRequestForController:(MPRequestResponseController *)arg1;
- (_Bool)controller:(MPRequestResponseController *)arg1 shouldRetryFailedRequestWithError:(NSError *)arg2;
- (void)controller:(MPRequestResponseController *)arg1 defersResponseReplacement:(void (^)(void))arg2;
@end

