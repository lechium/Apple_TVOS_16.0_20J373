//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class URLBag, URLRequestProperties;

@interface URLRequest : NSObject
{
    URLBag *_bag;	// 8 = 0x8
    URLRequestProperties *_requestProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006f909
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006f615
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x001000000006f57b

@end
