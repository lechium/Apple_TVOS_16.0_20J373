//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class VCStreamInput;

@protocol VCStreamInputDelegate <NSObject>
- (void)didResumeStreamInput:(VCStreamInput *)arg1;
- (void)didSuspendStreamInput:(VCStreamInput *)arg1;
- (void)didStopStreamInput:(VCStreamInput *)arg1;
- (void)didStartStreamInput:(VCStreamInput *)arg1;
@end

