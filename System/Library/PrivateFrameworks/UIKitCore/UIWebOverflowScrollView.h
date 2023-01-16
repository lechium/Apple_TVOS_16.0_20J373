//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class CALayer, DOMNode, UIWebBrowserView, UIWebOverflowContentView, UIWebOverflowScrollListener;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollView : UIScrollView
{
    _Bool _beingRemoved;	// 184 = 0xb8
    UIWebBrowserView *_webBrowserView;	// 192 = 0xc0
    UIWebOverflowScrollListener *_scrollListener;	// 200 = 0xc8
    UIWebOverflowContentView *_overflowContentView;	// 208 = 0xd0
    DOMNode *_node;	// 216 = 0xd8
    CALayer *_webLayer;	// 224 = 0xe0
}

@property(retain, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;
@property(nonatomic, getter=isBeingRemoved) _Bool beingRemoved; // @synthesize beingRemoved=_beingRemoved;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
@property(retain, nonatomic) UIWebOverflowContentView *overflowContentView; // @synthesize overflowContentView=_overflowContentView;
@property(retain, nonatomic) UIWebOverflowScrollListener *scrollListener; // @synthesize scrollListener=_scrollListener;
@property(nonatomic) UIWebBrowserView *webBrowserView; // @synthesize webBrowserView=_webBrowserView;
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000122c962
- (_Bool)fixUpViewAfterInsertion;	// IMP=0x000000000122c8f6
- (id)superview;	// IMP=0x000000000122c825
- (void)willBeRemoved;	// IMP=0x000000000122c811
- (void)replaceLayer:(id)arg1;	// IMP=0x000000000122c7d4
- (void)dealloc;	// IMP=0x000000000122c760
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;	// IMP=0x000000000122c645

@end
