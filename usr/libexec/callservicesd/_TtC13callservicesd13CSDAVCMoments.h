//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol CSDAVCMomentsDelegate;

@interface _TtC13callservicesd13CSDAVCMoments : NSObject
{
    MISSING_TYPE *moments;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000002e29d0
- (id)init;	// IMP=0x00100000002e2970
- (id)newRequestWithMediaType:(unsigned char)arg1 mode:(unsigned char)arg2 requesteeID:(id)arg3;	// IMP=0x00100000002e28f0
@property(nonatomic, readonly) int pendingRequestCount;
@property(nonatomic, readonly) int activeRequestCount;
@property(nonatomic, readonly) unsigned int capabilities;
@property(nonatomic, readonly) long long streamToken;
- (id)initWithStreamToken:(long long)arg1 requesterID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;	// IMP=0x00100000002e2730
@property(nonatomic) __weak id <CSDAVCMomentsDelegate> delegate; // @synthesize delegate;

@end
