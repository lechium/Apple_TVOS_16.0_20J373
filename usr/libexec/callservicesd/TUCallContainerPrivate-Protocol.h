//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TUCallContainer-Protocol.h"

@class NSArray, TUCall;

@protocol TUCallContainerPrivate <TUCallContainer>
@property(nonatomic, readonly) _Bool existingCallsHaveMultipleProviders;
@property(nonatomic, readonly) TUCall *frontmostAudioOrVideoCall;
@property(nonatomic, readonly) TUCall *frontmostCall;
@property(nonatomic, readonly) TUCall *conferenceCall;
@property(nonatomic, readonly) TUCall *displayedCall;
- (TUCall *)callPassingTest:(_Bool (^)(TUCall *))arg1 sortedUsingComparator:(long long (^)(id, id))arg2;
@property(nonatomic, readonly) NSArray *_allCalls;
@end
