//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAVRoute;

@interface MRDRouteAuthorizationRequest : NSObject
{
    CDUnknownBlockType _responseCallback;	// 8 = 0x8
    CDUnknownBlockType _cancelCallback;	// 16 = 0x10
    MRDAVRoute *_route;	// 24 = 0x18
    long long _inputType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000fdbae
@property(readonly, nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property(readonly, nonatomic) MRDAVRoute *route; // @synthesize route=_route;
- (void)cancel;	// IMP=0x00100000000fdb8e
- (void)respondWithAuthorizationToken:(id)arg1;	// IMP=0x00100000000fdb7c
- (id)initWithRoute:(id)arg1 inputType:(long long)arg2 responseCallback:(CDUnknownBlockType)arg3 cancelCallback:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fda8f

@end

