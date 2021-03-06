/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEConnectionRequestTuple : NSObject {
    unsigned int _advertisementFormat;
    NSObject<OS_dispatch_source> *_connectionRequestTimer;
    NSString *_identifier;
}

@property (nonatomic, readonly) unsigned int advertisementFormat;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *connectionRequestTimer;
@property (nonatomic, readonly) NSString *identifier;

+ (id)connectionRequestTupleWithTimer:(id)arg1 identifier:(id)arg2 advertisementFormat:(unsigned int)arg3;

- (void).cxx_destruct;
- (unsigned int)advertisementFormat;
- (id)connectionRequestTimer;
- (id)identifier;

@end
