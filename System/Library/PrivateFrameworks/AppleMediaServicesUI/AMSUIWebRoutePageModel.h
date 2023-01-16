//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, AMSUIWebClientContext, AMSUIWebNavigationBarModel, AMSUIWebWrapperViewController, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebRoutePageModel : NSObject
{
    _Bool _loadUsingWebKit;	// 8 = 0x8
    NSString *_backgroundColor;	// 16 = 0x10
    AMSMetricsEvent *_impressionEvent;	// 24 = 0x18
    AMSUIWebNavigationBarModel *_navigationBar;	// 32 = 0x20
    NSDictionary *_clientOptions;	// 40 = 0x28
    AMSUIWebClientContext *_context;	// 48 = 0x30
    NSDictionary *_headers;	// 56 = 0x38
    NSURL *_URL;	// 64 = 0x40
    AMSUIWebWrapperViewController *_viewController;	// 72 = 0x48
    struct CGSize _windowSize;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000087259
@property(retain, nonatomic) AMSUIWebWrapperViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) _Bool loadUsingWebKit; // @synthesize loadUsingWebKit=_loadUsingWebKit;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDictionary *clientOptions; // @synthesize clientOptions=_clientOptions;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)_webPageViewController;	// IMP=0x0000000000086fc0
- (id)loadPage;	// IMP=0x0000000000086fa7
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewControllerForContainer:(id)arg1;	// IMP=0x0000000000086f8d
@property(readonly, copy) NSString *description;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000086a0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

