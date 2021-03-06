/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester> {
    NSURL *_url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (void)loadWithLimit:(unsigned int)arg1 dataPointReader:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setUrl:(id)arg1;
- (id)url;

@end
