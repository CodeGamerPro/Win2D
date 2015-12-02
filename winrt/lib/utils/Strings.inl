// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

// This file is included multiple times, from both Strings.h and Strings.cpp, 
// using different macro definitions to generate both constant declarations and 
// definitions from the same source data.

// If we someday want to localize error messages into languages other than 
// English, this data should be moved out to a proper resources file. But for 
// now, simple C++ constants are "good enough"(tm).

STRING(AutoFileFormatNotAllowed, L"The option CanvasFileFormat.Auto is not allowed when saving to a stream.")
STRING(CacheOnDemandNotSet, L"This method may only be called if the CanvasVirtualBitmap was created with CanvasVirtualBitmapOptions.CacheOnDemand.")
STRING(CanOnlyAddPathDataWhileInFigure, L"This operation is only allowed after a successful call to CanvasPathBuilder.BeginFigure.")
STRING(CanvasDeviceGetDeviceWhenNotCreated, L"The control does not currently have a CanvasDevice associated with it. Ensure that resources are created from a CreateResources or Draw event handler.");
STRING(CanvasPrintDocumentMustBeConstructedOnUIThread, L"CanvasPrintDocument must be constructed on a UI thread.");
STRING(CanvasPrintEventArgsDpiCannotBeChangedAfterCreateDrawingSession, L"CanvasPrintEventArgs.Dpi cannot be set after the first call to CanvasPrintEventArgs.CreateDrawingSession.");
STRING(CanvasPrintEventArgsCannotCreateDrawingSessionUntilPreviousOneClosed, L"The last drawing session returned by CanvasPrintEventArgs.CreateDrawingSession must be disposed before a new one can be created.");
STRING(CanvasPrintDocumentGetDeferralMayOnlyBeCalledOnce, L"GetDeferral can only be called once per event.")
STRING(CanvasPrintDocumentDeferralCompleteMayOnlyBeCalledOnce, L"CanvasPrintDeferral.Complete may only be called once.")
STRING(CommandListCannotBeDrawnToAfterItHasBeenUsed, L"CanvasCommandList.CreateDrawingSession cannot be called after the CanvasCommandList has been used as an image.")
STRING(CreateDrawingSessionCalledBeforeRegionsInvalidated, L"CreateDrawingSession cannot be called before the RegionsInvalidated event has been raised.");
STRING(CustomEffectBadFeatureLevel, L"This shader requires a higher Direct3D feature level than is supported by the device. Check PixelShaderEffect.IsSupported before using it.");
STRING(CustomEffectBadShader, L"Unable to load the specified shader. This should be a Direct3D pixel shader compiled for shader model 4.");
STRING(CustomEffectBadPropertyType, L"Shader property '%S' is an unsupported type.");
STRING(CustomEffectMaxOffsetWithoutOffsetMapping, L"When PixelShaderEffect.MaxSamplerOffset is set, at least one source should be using SamplerCoordinateMapping.Offset.");
STRING(CustomEffectOffsetMappingWithoutMaxOffset, L"When PixelShaderEffect.Source%dMapping is set to Offset, MaxSamplerOffset should also be set.");
STRING(CustomEffectSourceOutOfRange, L"Source%d must be null when using this pixel shader (shader inputs: %d).");
STRING(CustomEffectTooManyConstantBuffers, L"Unsupported constant buffer layout. There should be a single constant buffer bound to b0.");
STRING(CustomEffectTooManyTextures, L"Shader has too many input textures.");
STRING(CustomEffectUnknownProperty, L"Shader does not have a property named '%s'.");
STRING(CustomEffectWrongPropertyArraySize, L"Wrong array size. Shader property '%s' is an array of %d elements.");
STRING(CustomEffectWrongPropertyType, L"Wrong type. Shader property '%s' is of type %s.");
STRING(CustomEffectWrongPropertyTypeArray, L"Wrong type. Shader property '%s' is an array of %s.");
STRING(DeviceExpectedToBeLost, L"This API was unexpectedly called when the Direct3D device is not lost.")
STRING(DidNotPopLayer, L"After calling CanvasDrawingSession.CreateLayer, you must close the resulting CanvasActiveLayer before ending the CanvasDrawingSession.")
STRING(DrawImageMinBlendNotSupported, L"This DrawImage overload is not valid when CanvasDrawingSession.Blend is set to CanvasBlend.Min.")
STRING(EffectNoSources, L"Effect Sources collection is empty.")
STRING(EffectNullSource, L"Effect source #%d is null.")
STRING(EffectWrongDevice, L"Effect source #%d is associated with a different device.")
STRING(EffectWrongSourceType, L"Effect source #%d is an unsupported type. To draw an effect using Win2D, all its sources must be Win2D ICanvasImage objects.")
STRING(EndFigureWithoutBeginFigure, L"A call to CanvasPathBuilder.EndFigure occurred without a previous call to CanvasPathBuilder.BeginFigure.")
STRING(ExpectedPositiveNonzero, L"A positive, non-zero number was expected for this method.")
STRING(ExternalInlineObject, L"Attempted to retrieve an inline object which was not implemented as an ICanvasTextInlineObject.")
STRING(GetResourceNoDevice, L"To unwrap this resource type, a device parameter must be passed to GetWrappedResource.")
STRING(ImageBrushRequiresSourceRectangle, L"When using image types other than CanvasBitmap, CanvasImageBrush.SourceRectangle must not be null.")
STRING(InvalidAlphaModeForImageSource, L"An invalid alpha mode was specified. Use either CanvasAlphaMode.Ignore or CanvasAlphaMode.Premultiplied.")
STRING(InvalidFontFamilyUri, L"The URI specified in the CanvasTextFormat's FontFamily is not a valid application URI that can be opened by StorageFile.GetFileFromApplicationUriAsync.")
STRING(InvalidFontFamilyUriScheme, L"The URI specified in the CanvasTextFormat's FontFamily has an invalid scheme; the scheme may be omitted, or must be one of ms-appx:// or ms-appdata://.")
STRING(InvalidTypographyFeatureName, L"Attempted to add a typography feature without setting a valid feature name.")
STRING(MultipleAsyncCreateResourcesNotSupported, L"Only one asynchronous CreateResources action can be tracked at a time.")
STRING(PathBuilderAddGeometryMidFigure, L"CanvasPathBuilder.AddGeometry may not be called in the middle of a figure.")
STRING(PathBuilderClosedMidFigure, L"There was an attempt to use a CanvasPathBuilder, which was missing a call to CanvasPathBuilder.EndFigure.")
STRING(PixelColorsFormatRestriction, L"This method only supports resources with pixel format DirectXPixelFormat.B8G8R8A8UIntNormalized.")
STRING(PoppedWrongLayer, L"Attempting to close a CanvasActiveLayer that is not top of the stack. The most recently created layer must be closed first.")
STRING(RemoteFontUnavailable, L"The requested font is not locally available.")
STRING(ResourceManagerNoDevice, L"To wrap this resource type, a device parameter must be passed to GetOrCreate.")
STRING(ResourceManagerNoDpi, L"To wrap this resource type, a dpi parameter must be passed to GetOrCreate.")
STRING(ResourceManagerUnknownType, L"Unsupported type. Win2D is not able to wrap the specified resource.")
STRING(ResourceManagerWrongDevice, L"Existing resource wrapper is associated with a different device.")
STRING(ResourceManagerWrongDpi, L"Existing resource wrapper has a different DPI.")
STRING(SetFilledRegionDeterminationAfterBeginFigure, L"This operation is not allowed after the first call to CanvasPathBuilder.BeginFigure.")
STRING(SetPageCountCalledBeforePreviewing, L"CanvasPrintDocument.SetPageCount or CanvasPrintDocument.SetIntermediatePageCount cannot be called until the Paginate event has been raised.")
STRING(SpriteBatchInvalidInterpolation, L"Invalid interpolation mode specified. Sprite batches only support CanvasImageInterpolation.NearestNeighbor or CanvasImageInterpolation.Linear.")
STRING(SpriteBatchNotAvailable, L"Sprite batches are not supported on this device. Use CanvasSpriteBatch.IsSupported to determine if sprite batches are supported.")
STRING(TextRendererNotValid, L"The application called a method on a text renderer, but this text renderer is no longer valid.")
STRING(TwoBeginFigures, L"A call to CanvasPathBuilder.BeginFigure occurred, when the figure was already begun.")
STRING(UnrecognizedImageFileExtension, L"When saving a CanvasBitmap without specifying a CanvasBitmapFileFormat, the file name must include a recognized file extension such as '.jpeg' or '.png'.");
STRING(WrongArrayLength, L"The array was expected to be of size %d; actual array was of size %d.")
STRING(WrongNamedArrayLength, L"The array %s was expected to be of size %d; actual array was of size %d.")
