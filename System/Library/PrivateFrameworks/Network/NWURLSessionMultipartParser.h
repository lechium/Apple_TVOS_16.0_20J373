//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NWURLSessionMultipartBoundaryRecognizer, NWURLSessionMultipartHeaderRecognizer;
@protocol NWURLSessionResponseConsumer, OS_dispatch_data, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NWURLSessionMultipartParser : NSObject
{
    _Bool _isFirstBoundary;	// 8 = 0x8
    int _parserState;	// 12 = 0xc
    NSString *_boundary;	// 16 = 0x10
    id <NWURLSessionResponseConsumer> _responseConsumer;	// 24 = 0x18
    NSObject<OS_dispatch_data> *_data;	// 32 = 0x20
    NWURLSessionMultipartBoundaryRecognizer *_boundaryRecognizer;	// 40 = 0x28
    NWURLSessionMultipartBoundaryRecognizer *_closeDelimiterRecognizer;	// 48 = 0x30
    NWURLSessionMultipartHeaderRecognizer *_headerRecognizer;	// 56 = 0x38
    NSMutableDictionary *_headers;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    unsigned long long _boundaryPatternSize;	// 80 = 0x50
    unsigned long long _closeDelimiterPatternSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000547ec0

@end

